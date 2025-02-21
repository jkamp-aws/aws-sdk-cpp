﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/BackupSelection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class GetBackupSelectionResult
  {
  public:
    AWS_BACKUP_API GetBackupSelectionResult();
    AWS_BACKUP_API GetBackupSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetBackupSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline const BackupSelection& GetBackupSelection() const{ return m_backupSelection; }

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline void SetBackupSelection(const BackupSelection& value) { m_backupSelection = value; }

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline void SetBackupSelection(BackupSelection&& value) { m_backupSelection = std::move(value); }

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline GetBackupSelectionResult& WithBackupSelection(const BackupSelection& value) { SetBackupSelection(value); return *this;}

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline GetBackupSelectionResult& WithBackupSelection(BackupSelection&& value) { SetBackupSelection(std::move(value)); return *this;}


    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline const Aws::String& GetSelectionId() const{ return m_selectionId; }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(const Aws::String& value) { m_selectionId = value; }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(Aws::String&& value) { m_selectionId = std::move(value); }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline void SetSelectionId(const char* value) { m_selectionId.assign(value); }

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline GetBackupSelectionResult& WithSelectionId(const Aws::String& value) { SetSelectionId(value); return *this;}

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline GetBackupSelectionResult& WithSelectionId(Aws::String&& value) { SetSelectionId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the body of a request to assign a set of resources to a
     * backup plan.</p>
     */
    inline GetBackupSelectionResult& WithSelectionId(const char* value) { SetSelectionId(value); return *this;}


    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupSelectionResult& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupSelectionResult& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline GetBackupSelectionResult& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupSelectionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a backup selection is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline GetBackupSelectionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline GetBackupSelectionResult& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline GetBackupSelectionResult& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline GetBackupSelectionResult& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}

  private:

    BackupSelection m_backupSelection;

    Aws::String m_selectionId;

    Aws::String m_backupPlanId;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_creatorRequestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
